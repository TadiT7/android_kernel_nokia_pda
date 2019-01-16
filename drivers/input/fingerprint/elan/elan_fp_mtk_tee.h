#ifndef _LINUX_ELAN_FP_H
#define _LINUX_ELAN_FP_H

#define FINGERPRINT_IOCTL               0x80
#define ID_IOCTL_RESET                  _IOW(FINGERPRINT_IOCTL, 6,  int)
#define ID_IOCTL_POLL_INIT              _IOW(FINGERPRINT_IOCTL, 20, int)
#define ID_IOCTL_INPUT_KEYCODE          _IOW(FINGERPRINT_IOCTL, 22, int)
#define ID_IOCTL_POLL_EXIT              _IOW(FINGERPRINT_IOCTL, 23, int)
#define ID_IOCTL_SET_KEYCODE            _IOW(FINGERPRINT_IOCTL, 24, int)
#define ID_IOCTL_READ_FACTORY_STATUS    _IOW(FINGERPRINT_IOCTL, 26, int)
#define ID_IOCTL_WRITE_FACTORY_STATUS   _IOW(FINGERPRINT_IOCTL, 27, int)
#define ID_IOCTL_INPUT_KEYCODE_DOWN     _IOW(FINGERPRINT_IOCTL, 28, int)
#define ID_IOCTL_INPUT_KEYCODE_UP       _IOW(FINGERPRINT_IOCTL, 29, int)
#define ID_IOCTL_INT_STATUS             _IOW(FINGERPRINT_IOCTL, 40, int)
#define ID_IOCTL_WAKE_LOCK_UNLOCK       _IOW(FINGERPRINT_IOCTL, 41, int)
#define ID_IOCTL_EN_IRQ                 _IOW(FINGERPRINT_IOCTL, 55, int)
#define ID_IOCTL_DIS_IRQ                _IOW(FINGERPRINT_IOCTL, 66, int)
#define ID_IOCTL_ENABLE_SPI_CLK         _IOW(FINGERPRINT_IOCTL, 77, int)
#define ID_IOCTL_DISABLE_SPI_CLK        _IOW(FINGERPRINT_IOCTL, 88, int)
#define ID_IOCTL_SET_IRQ_TYPE           _IOW(FINGERPRINT_IOCTL, 91, int)
#define ID_IOCTL_DISPLAY_STATUS         _IOW(FINGERPRINT_IOCTL, 93, int)
#define ID_IOCTL_DISPLAY_NOTIFY         _IOW(FINGERPRINT_IOCTL, 94, int)
#define ID_IOCTL_REQUEST_IRQ            _IOW(FINGERPRINT_IOCTL, 95, int)
#define ID_IOCTL_FREE_IRQ               _IOW(FINGERPRINT_IOCTL, 96, int)

#define CUSTOMER_IOCTLID                0xD0 //For customer define

#ifdef CONFIG_SPI_MT65XX
extern void mt_spi_enable_master_clk(struct spi_device *spidev);
extern void mt_spi_disable_master_clk(struct spi_device *spidev);
#endif

#endif /* _LINUX_ELAN_FP_H */
