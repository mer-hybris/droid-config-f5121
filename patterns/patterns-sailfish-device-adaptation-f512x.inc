%package -n patterns-sailfish-device-adaptation-f512x
Summary: Jolla HW Adaptation f512x
Requires: droid-hal-f5121
Requires: droid-hal-f5121-img-boot
Requires: droid-hal-f5121-img-recovery

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Bluetooth
Requires: bluetooth-rfkill-event-hciattach

# NFC
Requires: nfcd-pn54x-plugin

# Sensors
Requires: hybris-libsensorfw-qt5-hal

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: libngf-qt5-qtfeedback

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-glue
# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# For hybris devices with droidmedia, see HADK pdf for more information
Requires: gstreamer1.0-droid
Requires: gmp-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

## USB mode controller
# Enables mode selector upon plugging USB cable:
Requires: usb-moded

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: sailfish-devicelock-fpd

# Enable home encryption
Requires: sailfish-device-encryption

# For devices where test_gps eventually gets a fix:
Requires: geoclue-provider-hybris-hal

# Telephony (RIL sockets)
Requires: ofono-ril-plugin

%description -n patterns-sailfish-device-adaptation-f512x
Pattern with packages for f512x HW Adaptation

%files -n patterns-sailfish-device-adaptation-f512x
