VALID_PRODUCTS=(
"F5121"
"F5122"
)

FLASH_OPS=(
"getvar_fail_if secure yes"
"flash boot hybris-boot.img"
"flash userdata sailfish.img001"
"flash system fimage.img001"
"run fastboot boot fastboot.img"
# Wait to make sure host and device are ready.
"run sleep 3"
"flash_blob oem *_loire.img"
)

GETVAR_ERROR_secure="
This device has not been unlocked, but you need that for flashing.
Please go to https://developer.sony.com/develop/open-devices/get-started/unlock-bootloader/
and see instructions how to unlock your device.
"

BLOB_ERROR_NOT_FOUND_oem="
The Sony Vendor partition image was not found in the current directory. Please
download it from
https://developer.sony.com/file/download/software-binaries-for-aosp-marshmallow-android-6-0-1-kernel-3-10-loire/
and unzip it into this directory.
"

BLOB_ERROR_TOO_MANY_oem="
More than one Sony Vendor image was found. Please remove any additional files.
"

FLASH_COMPLETED_MESSAGE="
Remove the USB cable and bootup the device by pressing powerkey.
"
