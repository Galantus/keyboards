# Dactyl Giant — split communication diagnostics

This branch enables `CONSOLE_ENABLE = yes` in `rules.mk`. It does not yet add custom split-transport instrumentation. Enabling console support alone does **not** guarantee any split-related log messages.

## Known configuration

- MCU: RP2040 (`BOARD = GENERIC_RP_RP2040`)
- Serial transport: `SERIAL_DRIVER = vendor`
- Data: `SOFT_SERIAL_PIN GP0`
- Side identification: `SPLIT_HAND_PIN GP28`
- USB detection: `SPLIT_USB_DETECT`
- Watchdog: `SPLIT_WATCHDOG_ENABLE`

## Test plan

1. Save the Vial layout (`vial_layout.vil` is in the repository, but confirm it matches your current layout).
2. Confirm the exact QMK/Vial fork and revision used for the existing firmware; this directory alone is not a complete QMK checkout. Build and validate the diagnostic UF2 against that source before flashing.
3. Disconnect USB **before** connecting or disconnecting the 3.5-mm split cable. Never hot-plug TRRS.
4. Test left USB + right connected; then power off and test right USB + left connected.
5. Observe whether the opposite half's keys register. If a serial console is available, record its output from the USB-connected half. No logs does not mean GP0 is faulty.
6. If both halves still fail to communicate, check the split connector and GP0 wiring before replacing the MCU. LED illumination alone does not prove adequate supply voltage.

Do not reset EEPROM or flash unverified binaries as an initial diagnostic step.
