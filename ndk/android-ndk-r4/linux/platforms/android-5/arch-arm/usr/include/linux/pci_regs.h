/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef LINUX_PCI_REGS_H
#define LINUX_PCI_REGS_H

#define PCI_VENDOR_ID 0x00  
#define PCI_DEVICE_ID 0x02  
#define PCI_COMMAND 0x04  
#define PCI_COMMAND_IO 0x1  
#define PCI_COMMAND_MEMORY 0x2  
#define PCI_COMMAND_MASTER 0x4  
#define PCI_COMMAND_SPECIAL 0x8  
#define PCI_COMMAND_INVALIDATE 0x10  
#define PCI_COMMAND_VGA_PALETTE 0x20  
#define PCI_COMMAND_PARITY 0x40  
#define PCI_COMMAND_WAIT 0x80  
#define PCI_COMMAND_SERR 0x100  
#define PCI_COMMAND_FAST_BACK 0x200  
#define PCI_COMMAND_INTX_DISABLE 0x400  

#define PCI_STATUS 0x06  
#define PCI_STATUS_CAP_LIST 0x10  
#define PCI_STATUS_66MHZ 0x20  
#define PCI_STATUS_UDF 0x40  
#define PCI_STATUS_FAST_BACK 0x80  
#define PCI_STATUS_PARITY 0x100  
#define PCI_STATUS_DEVSEL_MASK 0x600  
#define PCI_STATUS_DEVSEL_FAST 0x000
#define PCI_STATUS_DEVSEL_MEDIUM 0x200
#define PCI_STATUS_DEVSEL_SLOW 0x400
#define PCI_STATUS_SIG_TARGET_ABORT 0x800  
#define PCI_STATUS_REC_TARGET_ABORT 0x1000  
#define PCI_STATUS_REC_MASTER_ABORT 0x2000  
#define PCI_STATUS_SIG_SYSTEM_ERROR 0x4000  
#define PCI_STATUS_DETECTED_PARITY 0x8000  

#define PCI_CLASS_REVISION 0x08  
#define PCI_REVISION_ID 0x08  
#define PCI_CLASS_PROG 0x09  
#define PCI_CLASS_DEVICE 0x0a  

#define PCI_CACHE_LINE_SIZE 0x0c  
#define PCI_LATENCY_TIMER 0x0d  
#define PCI_HEADER_TYPE 0x0e  
#define PCI_HEADER_TYPE_NORMAL 0
#define PCI_HEADER_TYPE_BRIDGE 1
#define PCI_HEADER_TYPE_CARDBUS 2

#define PCI_BIST 0x0f  
#define PCI_BIST_CODE_MASK 0x0f  
#define PCI_BIST_START 0x40  
#define PCI_BIST_CAPABLE 0x80  

#define PCI_BASE_ADDRESS_0 0x10  
#define PCI_BASE_ADDRESS_1 0x14  
#define PCI_BASE_ADDRESS_2 0x18  
#define PCI_BASE_ADDRESS_3 0x1c  
#define PCI_BASE_ADDRESS_4 0x20  
#define PCI_BASE_ADDRESS_5 0x24  
#define PCI_BASE_ADDRESS_SPACE 0x01  
#define PCI_BASE_ADDRESS_SPACE_IO 0x01
#define PCI_BASE_ADDRESS_SPACE_MEMORY 0x00
#define PCI_BASE_ADDRESS_MEM_TYPE_MASK 0x06
#define PCI_BASE_ADDRESS_MEM_TYPE_32 0x00  
#define PCI_BASE_ADDRESS_MEM_TYPE_1M 0x02  
#define PCI_BASE_ADDRESS_MEM_TYPE_64 0x04  
#define PCI_BASE_ADDRESS_MEM_PREFETCH 0x08  
#define PCI_BASE_ADDRESS_MEM_MASK (~0x0fUL)
#define PCI_BASE_ADDRESS_IO_MASK (~0x03UL)

#define PCI_CARDBUS_CIS 0x28
#define PCI_SUBSYSTEM_VENDOR_ID 0x2c
#define PCI_SUBSYSTEM_ID 0x2e
#define PCI_ROM_ADDRESS 0x30  
#define PCI_ROM_ADDRESS_ENABLE 0x01
#define PCI_ROM_ADDRESS_MASK (~0x7ffUL)

#define PCI_CAPABILITY_LIST 0x34  

#define PCI_INTERRUPT_LINE 0x3c  
#define PCI_INTERRUPT_PIN 0x3d  
#define PCI_MIN_GNT 0x3e  
#define PCI_MAX_LAT 0x3f  

#define PCI_PRIMARY_BUS 0x18  
#define PCI_SECONDARY_BUS 0x19  
#define PCI_SUBORDINATE_BUS 0x1a  
#define PCI_SEC_LATENCY_TIMER 0x1b  
#define PCI_IO_BASE 0x1c  
#define PCI_IO_LIMIT 0x1d
#define PCI_IO_RANGE_TYPE_MASK 0x0fUL  
#define PCI_IO_RANGE_TYPE_16 0x00
#define PCI_IO_RANGE_TYPE_32 0x01
#define PCI_IO_RANGE_MASK (~0x0fUL)
#define PCI_SEC_STATUS 0x1e  
#define PCI_MEMORY_BASE 0x20  
#define PCI_MEMORY_LIMIT 0x22
#define PCI_MEMORY_RANGE_TYPE_MASK 0x0fUL
#define PCI_MEMORY_RANGE_MASK (~0x0fUL)
#define PCI_PREF_MEMORY_BASE 0x24  
#define PCI_PREF_MEMORY_LIMIT 0x26
#define PCI_PREF_RANGE_TYPE_MASK 0x0fUL
#define PCI_PREF_RANGE_TYPE_32 0x00
#define PCI_PREF_RANGE_TYPE_64 0x01
#define PCI_PREF_RANGE_MASK (~0x0fUL)
#define PCI_PREF_BASE_UPPER32 0x28  
#define PCI_PREF_LIMIT_UPPER32 0x2c
#define PCI_IO_BASE_UPPER16 0x30  
#define PCI_IO_LIMIT_UPPER16 0x32

#define PCI_ROM_ADDRESS1 0x38  

#define PCI_BRIDGE_CONTROL 0x3e
#define PCI_BRIDGE_CTL_PARITY 0x01  
#define PCI_BRIDGE_CTL_SERR 0x02  
#define PCI_BRIDGE_CTL_NO_ISA 0x04  
#define PCI_BRIDGE_CTL_VGA 0x08  
#define PCI_BRIDGE_CTL_MASTER_ABORT 0x20  
#define PCI_BRIDGE_CTL_BUS_RESET 0x40  
#define PCI_BRIDGE_CTL_FAST_BACK 0x80  

#define PCI_CB_CAPABILITY_LIST 0x14

#define PCI_CB_SEC_STATUS 0x16  
#define PCI_CB_PRIMARY_BUS 0x18  
#define PCI_CB_CARD_BUS 0x19  
#define PCI_CB_SUBORDINATE_BUS 0x1a  
#define PCI_CB_LATENCY_TIMER 0x1b  
#define PCI_CB_MEMORY_BASE_0 0x1c
#define PCI_CB_MEMORY_LIMIT_0 0x20
#define PCI_CB_MEMORY_BASE_1 0x24
#define PCI_CB_MEMORY_LIMIT_1 0x28
#define PCI_CB_IO_BASE_0 0x2c
#define PCI_CB_IO_BASE_0_HI 0x2e
#define PCI_CB_IO_LIMIT_0 0x30
#define PCI_CB_IO_LIMIT_0_HI 0x32
#define PCI_CB_IO_BASE_1 0x34
#define PCI_CB_IO_BASE_1_HI 0x36
#define PCI_CB_IO_LIMIT_1 0x38
#define PCI_CB_IO_LIMIT_1_HI 0x3a
#define PCI_CB_IO_RANGE_MASK (~0x03UL)

#define PCI_CB_BRIDGE_CONTROL 0x3e
#define PCI_CB_BRIDGE_CTL_PARITY 0x01  
#define PCI_CB_BRIDGE_CTL_SERR 0x02
#define PCI_CB_BRIDGE_CTL_ISA 0x04
#define PCI_CB_BRIDGE_CTL_VGA 0x08
#define PCI_CB_BRIDGE_CTL_MASTER_ABORT 0x20
#define PCI_CB_BRIDGE_CTL_CB_RESET 0x40  
#define PCI_CB_BRIDGE_CTL_16BIT_INT 0x80  
#define PCI_CB_BRIDGE_CTL_PREFETCH_MEM0 0x100  
#define PCI_CB_BRIDGE_CTL_PREFETCH_MEM1 0x200
#define PCI_CB_BRIDGE_CTL_POST_WRITES 0x400
#define PCI_CB_SUBSYSTEM_VENDOR_ID 0x40
#define PCI_CB_SUBSYSTEM_ID 0x42
#define PCI_CB_LEGACY_MODE_BASE 0x44  

#define PCI_CAP_LIST_ID 0  
#define PCI_CAP_ID_PM 0x01  
#define PCI_CAP_ID_AGP 0x02  
#define PCI_CAP_ID_VPD 0x03  
#define PCI_CAP_ID_SLOTID 0x04  
#define PCI_CAP_ID_MSI 0x05  
#define PCI_CAP_ID_CHSWP 0x06  
#define PCI_CAP_ID_PCIX 0x07  
#define PCI_CAP_ID_HT_IRQCONF 0x08  
#define PCI_CAP_ID_VNDR 0x09  
#define PCI_CAP_ID_SHPC 0x0C  
#define PCI_CAP_ID_EXP 0x10  
#define PCI_CAP_ID_MSIX 0x11  
#define PCI_CAP_LIST_NEXT 1  
#define PCI_CAP_FLAGS 2  
#define PCI_CAP_SIZEOF 4

#define PCI_PM_PMC 2  
#define PCI_PM_CAP_VER_MASK 0x0007  
#define PCI_PM_CAP_PME_CLOCK 0x0008  
#define PCI_PM_CAP_RESERVED 0x0010  
#define PCI_PM_CAP_DSI 0x0020  
#define PCI_PM_CAP_AUX_POWER 0x01C0  
#define PCI_PM_CAP_D1 0x0200  
#define PCI_PM_CAP_D2 0x0400  
#define PCI_PM_CAP_PME 0x0800  
#define PCI_PM_CAP_PME_MASK 0xF800  
#define PCI_PM_CAP_PME_D0 0x0800  
#define PCI_PM_CAP_PME_D1 0x1000  
#define PCI_PM_CAP_PME_D2 0x2000  
#define PCI_PM_CAP_PME_D3 0x4000  
#define PCI_PM_CAP_PME_D3cold 0x8000  
#define PCI_PM_CTRL 4  
#define PCI_PM_CTRL_STATE_MASK 0x0003  
#define PCI_PM_CTRL_NO_SOFT_RESET 0x0004  
#define PCI_PM_CTRL_PME_ENABLE 0x0100  
#define PCI_PM_CTRL_DATA_SEL_MASK 0x1e00  
#define PCI_PM_CTRL_DATA_SCALE_MASK 0x6000  
#define PCI_PM_CTRL_PME_STATUS 0x8000  
#define PCI_PM_PPB_EXTENSIONS 6  
#define PCI_PM_PPB_B2_B3 0x40  
#define PCI_PM_BPCC_ENABLE 0x80  
#define PCI_PM_DATA_REGISTER 7  
#define PCI_PM_SIZEOF 8

#define PCI_AGP_VERSION 2  
#define PCI_AGP_RFU 3  
#define PCI_AGP_STATUS 4  
#define PCI_AGP_STATUS_RQ_MASK 0xff000000  
#define PCI_AGP_STATUS_SBA 0x0200  
#define PCI_AGP_STATUS_64BIT 0x0020  
#define PCI_AGP_STATUS_FW 0x0010  
#define PCI_AGP_STATUS_RATE4 0x0004  
#define PCI_AGP_STATUS_RATE2 0x0002  
#define PCI_AGP_STATUS_RATE1 0x0001  
#define PCI_AGP_COMMAND 8  
#define PCI_AGP_COMMAND_RQ_MASK 0xff000000  
#define PCI_AGP_COMMAND_SBA 0x0200  
#define PCI_AGP_COMMAND_AGP 0x0100  
#define PCI_AGP_COMMAND_64BIT 0x0020  
#define PCI_AGP_COMMAND_FW 0x0010  
#define PCI_AGP_COMMAND_RATE4 0x0004  
#define PCI_AGP_COMMAND_RATE2 0x0002  
#define PCI_AGP_COMMAND_RATE1 0x0001  
#define PCI_AGP_SIZEOF 12

#define PCI_VPD_ADDR 2  
#define PCI_VPD_ADDR_MASK 0x7fff  
#define PCI_VPD_ADDR_F 0x8000  
#define PCI_VPD_DATA 4  

#define PCI_SID_ESR 2  
#define PCI_SID_ESR_NSLOTS 0x1f  
#define PCI_SID_ESR_FIC 0x20  
#define PCI_SID_CHASSIS_NR 3  

#define PCI_MSI_FLAGS 2  
#define PCI_MSI_FLAGS_64BIT 0x80  
#define PCI_MSI_FLAGS_QSIZE 0x70  
#define PCI_MSI_FLAGS_QMASK 0x0e  
#define PCI_MSI_FLAGS_ENABLE 0x01  
#define PCI_MSI_FLAGS_MASKBIT 0x100  
#define PCI_MSI_RFU 3  
#define PCI_MSI_ADDRESS_LO 4  
#define PCI_MSI_ADDRESS_HI 8  
#define PCI_MSI_DATA_32 8  
#define PCI_MSI_DATA_64 12  
#define PCI_MSI_MASK_BIT 16  

#define PCI_CHSWP_CSR 2  
#define PCI_CHSWP_DHA 0x01  
#define PCI_CHSWP_EIM 0x02  
#define PCI_CHSWP_PIE 0x04  
#define PCI_CHSWP_LOO 0x08  
#define PCI_CHSWP_PI 0x30  
#define PCI_CHSWP_EXT 0x40  
#define PCI_CHSWP_INS 0x80  

#define PCI_X_CMD 2  
#define PCI_X_CMD_DPERR_E 0x0001  
#define PCI_X_CMD_ERO 0x0002  
#define PCI_X_CMD_MAX_READ 0x000c  
#define PCI_X_CMD_MAX_SPLIT 0x0070  
#define PCI_X_CMD_VERSION(x) (((x) >> 12) & 3)  
#define PCI_X_STATUS 4  
#define PCI_X_STATUS_DEVFN 0x000000ff  
#define PCI_X_STATUS_BUS 0x0000ff00  
#define PCI_X_STATUS_64BIT 0x00010000  
#define PCI_X_STATUS_133MHZ 0x00020000  
#define PCI_X_STATUS_SPL_DISC 0x00040000  
#define PCI_X_STATUS_UNX_SPL 0x00080000  
#define PCI_X_STATUS_COMPLEX 0x00100000  
#define PCI_X_STATUS_MAX_READ 0x00600000  
#define PCI_X_STATUS_MAX_SPLIT 0x03800000  
#define PCI_X_STATUS_MAX_CUM 0x1c000000  
#define PCI_X_STATUS_SPL_ERR 0x20000000  
#define PCI_X_STATUS_266MHZ 0x40000000  
#define PCI_X_STATUS_533MHZ 0x80000000  

#define PCI_EXP_FLAGS 2  
#define PCI_EXP_FLAGS_VERS 0x000f  
#define PCI_EXP_FLAGS_TYPE 0x00f0  
#define PCI_EXP_TYPE_ENDPOINT 0x0  
#define PCI_EXP_TYPE_LEG_END 0x1  
#define PCI_EXP_TYPE_ROOT_PORT 0x4  
#define PCI_EXP_TYPE_UPSTREAM 0x5  
#define PCI_EXP_TYPE_DOWNSTREAM 0x6  
#define PCI_EXP_TYPE_PCI_BRIDGE 0x7  
#define PCI_EXP_FLAGS_SLOT 0x0100  
#define PCI_EXP_FLAGS_IRQ 0x3e00  
#define PCI_EXP_DEVCAP 4  
#define PCI_EXP_DEVCAP_PAYLOAD 0x07  
#define PCI_EXP_DEVCAP_PHANTOM 0x18  
#define PCI_EXP_DEVCAP_EXT_TAG 0x20  
#define PCI_EXP_DEVCAP_L0S 0x1c0  
#define PCI_EXP_DEVCAP_L1 0xe00  
#define PCI_EXP_DEVCAP_ATN_BUT 0x1000  
#define PCI_EXP_DEVCAP_ATN_IND 0x2000  
#define PCI_EXP_DEVCAP_PWR_IND 0x4000  
#define PCI_EXP_DEVCAP_PWR_VAL 0x3fc0000  
#define PCI_EXP_DEVCAP_PWR_SCL 0xc000000  
#define PCI_EXP_DEVCTL 8  
#define PCI_EXP_DEVCTL_CERE 0x0001  
#define PCI_EXP_DEVCTL_NFERE 0x0002  
#define PCI_EXP_DEVCTL_FERE 0x0004  
#define PCI_EXP_DEVCTL_URRE 0x0008  
#define PCI_EXP_DEVCTL_RELAX_EN 0x0010  
#define PCI_EXP_DEVCTL_PAYLOAD 0x00e0  
#define PCI_EXP_DEVCTL_EXT_TAG 0x0100  
#define PCI_EXP_DEVCTL_PHANTOM 0x0200  
#define PCI_EXP_DEVCTL_AUX_PME 0x0400  
#define PCI_EXP_DEVCTL_NOSNOOP_EN 0x0800  
#define PCI_EXP_DEVCTL_READRQ 0x7000  
#define PCI_EXP_DEVSTA 10  
#define PCI_EXP_DEVSTA_CED 0x01  
#define PCI_EXP_DEVSTA_NFED 0x02  
#define PCI_EXP_DEVSTA_FED 0x04  
#define PCI_EXP_DEVSTA_URD 0x08  
#define PCI_EXP_DEVSTA_AUXPD 0x10  
#define PCI_EXP_DEVSTA_TRPND 0x20  
#define PCI_EXP_LNKCAP 12  
#define PCI_EXP_LNKCTL 16  
#define PCI_EXP_LNKSTA 18  
#define PCI_EXP_SLTCAP 20  
#define PCI_EXP_SLTCTL 24  
#define PCI_EXP_SLTSTA 26  
#define PCI_EXP_RTCTL 28  
#define PCI_EXP_RTCTL_SECEE 0x01  
#define PCI_EXP_RTCTL_SENFEE 0x02  
#define PCI_EXP_RTCTL_SEFEE 0x04  
#define PCI_EXP_RTCTL_PMEIE 0x08  
#define PCI_EXP_RTCTL_CRSSVE 0x10  
#define PCI_EXP_RTCAP 30  
#define PCI_EXP_RTSTA 32  

#define PCI_EXT_CAP_ID(header) (header & 0x0000ffff)
#define PCI_EXT_CAP_VER(header) ((header >> 16) & 0xf)
#define PCI_EXT_CAP_NEXT(header) ((header >> 20) & 0xffc)

#define PCI_EXT_CAP_ID_ERR 1
#define PCI_EXT_CAP_ID_VC 2
#define PCI_EXT_CAP_ID_DSN 3
#define PCI_EXT_CAP_ID_PWR 4

#define PCI_ERR_UNCOR_STATUS 4  
#define PCI_ERR_UNC_TRAIN 0x00000001  
#define PCI_ERR_UNC_DLP 0x00000010  
#define PCI_ERR_UNC_POISON_TLP 0x00001000  
#define PCI_ERR_UNC_FCP 0x00002000  
#define PCI_ERR_UNC_COMP_TIME 0x00004000  
#define PCI_ERR_UNC_COMP_ABORT 0x00008000  
#define PCI_ERR_UNC_UNX_COMP 0x00010000  
#define PCI_ERR_UNC_RX_OVER 0x00020000  
#define PCI_ERR_UNC_MALF_TLP 0x00040000  
#define PCI_ERR_UNC_ECRC 0x00080000  
#define PCI_ERR_UNC_UNSUP 0x00100000  
#define PCI_ERR_UNCOR_MASK 8  

#define PCI_ERR_UNCOR_SEVER 12  

#define PCI_ERR_COR_STATUS 16  
#define PCI_ERR_COR_RCVR 0x00000001  
#define PCI_ERR_COR_BAD_TLP 0x00000040  
#define PCI_ERR_COR_BAD_DLLP 0x00000080  
#define PCI_ERR_COR_REP_ROLL 0x00000100  
#define PCI_ERR_COR_REP_TIMER 0x00001000  
#define PCI_ERR_COR_MASK 20  

#define PCI_ERR_CAP 24  
#define PCI_ERR_CAP_FEP(x) ((x) & 31)  
#define PCI_ERR_CAP_ECRC_GENC 0x00000020  
#define PCI_ERR_CAP_ECRC_GENE 0x00000040  
#define PCI_ERR_CAP_ECRC_CHKC 0x00000080  
#define PCI_ERR_CAP_ECRC_CHKE 0x00000100  
#define PCI_ERR_HEADER_LOG 28  
#define PCI_ERR_ROOT_COMMAND 44  

#define PCI_ERR_ROOT_CMD_COR_EN 0x00000001

#define PCI_ERR_ROOT_CMD_NONFATAL_EN 0x00000002

#define PCI_ERR_ROOT_CMD_FATAL_EN 0x00000004
#define PCI_ERR_ROOT_STATUS 48
#define PCI_ERR_ROOT_COR_RCV 0x00000001  

#define PCI_ERR_ROOT_MULTI_COR_RCV 0x00000002

#define PCI_ERR_ROOT_UNCOR_RCV 0x00000004

#define PCI_ERR_ROOT_MULTI_UNCOR_RCV 0x00000008
#define PCI_ERR_ROOT_FIRST_FATAL 0x00000010  
#define PCI_ERR_ROOT_NONFATAL_RCV 0x00000020  
#define PCI_ERR_ROOT_FATAL_RCV 0x00000040  
#define PCI_ERR_ROOT_COR_SRC 52
#define PCI_ERR_ROOT_SRC 54

#define PCI_VC_PORT_REG1 4
#define PCI_VC_PORT_REG2 8
#define PCI_VC_PORT_CTRL 12
#define PCI_VC_PORT_STATUS 14
#define PCI_VC_RES_CAP 16
#define PCI_VC_RES_CTRL 20
#define PCI_VC_RES_STATUS 26

#define PCI_PWR_DSR 4  
#define PCI_PWR_DATA 8  
#define PCI_PWR_DATA_BASE(x) ((x) & 0xff)  
#define PCI_PWR_DATA_SCALE(x) (((x) >> 8) & 3)  
#define PCI_PWR_DATA_PM_SUB(x) (((x) >> 10) & 7)  
#define PCI_PWR_DATA_PM_STATE(x) (((x) >> 13) & 3)  
#define PCI_PWR_DATA_TYPE(x) (((x) >> 15) & 7)  
#define PCI_PWR_DATA_RAIL(x) (((x) >> 18) & 7)  
#define PCI_PWR_CAP 12  
#define PCI_PWR_CAP_BUDGET(x) ((x) & 1)  

#endif
