#ifndef __ST7789_H__
#define __ST7789_H__

#ifdef __cplusplus
extern "C" {
#endif

#define ST7789_240x240_XSTART 0
#define ST7789_240x240_YSTART 0
#define ST7789_135x240_XSTART 52
#define ST7789_135x240_YSTART 40


#define NOP         0x00  // No-op
#define SWRESET     0x01  // Software reset
#define RDDID       0x04  // Read display ID info
#define RDDST       0x09  // Read display status
#define SLPIN       0x10  // Enter sleep mode
#define SLPOUT      0x11  // Exit sleep mode
#define PTLON       0x12  // Partial mode on
#define NORON       0x13  // Normal display mode on
#define RDMODE      0x0A  // Read display power mode
#define RDMADCTL    0x0B  // Read display MADCTL
#define RDPIXFMT    0x0C  // Read display pixel format
#define RDIMGFMT    0x0D  // Read display image format
#define RDSELFDIAG  0x0F  // Read display self-diagnostic
#define INVOFF      0x20  // Display inversion off
#define INVON       0x21  // Display inversion on
#define GAMMASET    0x26  // Gamma set
#define DISPLAY_OFF 0x28  // Display off
#define DISPLAY_ON  0x29  // Display on
#define SET_COLUMN  0x2A  // Column address set
#define SET_PAGE    0x2B  // Page address set
#define WRITE_RAM   0x2C  // Memory write
#define READ_RAM    0x2E  // Memory read
#define PTLAR       0x30  // Partial area
#define VSCRDEF     0x33  // Vertical scrolling definition
#define MADCTL      0x36  // Memory access control
#define VSCRSADD    0x37  // Vertical scrolling start address
#define PIXFMT      0x3A  // COLMOD: Pixel format set
#define FRMCTR1     0xB1  // Frame rate control (In normal mode/full colors
#define FRMCTR2     0xB2  // Frame rate control (In idle mode/8 colors
#define FRMCTR3     0xB3  // Frame rate control (In partial mode/full colors
#define INVCTR      0xB4  // Display inversion control
#define DFUNCTR     0xB6  // Display function control
#define PWCTR1      0xC0  // Power control 1
#define PWCTR2      0xC1  // Power control 2
#define PWCTRA      0xCB  // Power control A
#define PWCTRB      0xCF  // Power control B
#define VMCTR1      0xC5  // VCOM control 1
#define VMCTR2      0xC7  // VCOM control 2
#define RDID1       0xDA  // Read ID 1
#define RDID2       0xDB  // Read ID 2
#define RDID3       0xDC  // Read ID 3
#define RDID4       0xDD  // Read ID 4
#define GMCTRP1     0xE0  // Positive gamma correction
#define GMCTRN1     0xE1  // Negative gamma correction
#define DTCA        0xE8  // Driver timing control A
#define DTCB        0xEA  // Driver timing control B
#define POSC        0xED  // Power on sequence control
#define ENABLE3G    0xF2  // Enable 3 gamma control
#define PUMPRC      0xF7  // Pump ratio control

// color modes
#define COLOR_MODE_65K      0x50
#define COLOR_MODE_262K     0x60
#define COLOR_MODE_12BIT    0x03
#define COLOR_MODE_16BIT    0x05
#define COLOR_MODE_18BIT    0x06
#define COLOR_MODE_16M      0x07

// commands
#define ST7789_NOP     0x00
#define ST7789_SWRESET 0x01
#define ST7789_RDDID   0x04
#define ST7789_RDDST   0x09

#define ST7789_SLPIN   0x10
#define ST7789_SLPOUT  0x11
#define ST7789_PTLON   0x12
#define ST7789_NORON   0x13

#define ST7789_INVOFF  0x20
#define ST7789_INVON   0x21
#define ST7789_DISPOFF 0x28
#define ST7789_DISPON  0x29
#define ST7789_CASET   0x2A
#define ST7789_RASET   0x2B
#define ST7789_RAMWR   0x2C
#define ST7789_RAMRD   0x2E

#define ST7789_PTLAR   0x30
#define ST7789_COLMOD  0x3A
#define ST7789_MADCTL  0x36

#define ST7789_MADCTL_MY  0x80  // Page Address Order
#define ST7789_MADCTL_MX  0x40  // Column Address Order
#define ST7789_MADCTL_MV  0x20  // Page/Column Order
#define ST7789_MADCTL_ML  0x10  // Line Address Order
#define ST7789_MADCTL_MH  0x04  // Display Data Latch Order
#define ST7789_MADCTL_RGB 0x00
#define ST7789_MADCTL_BGR 0x08

#define ST7789_RDID1   0xDA
#define ST7789_RDID2   0xDB
#define ST7789_RDID3   0xDC
#define ST7789_RDID4   0xDD

// Color definitions
#define	BLACK   0x0000
#define	BLUE    0x001F
#define	RED     0xF800
#define	GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

#ifdef  __cplusplus
}
#endif /*  __cplusplus */

#endif  /*  __ST7789_H__ */
