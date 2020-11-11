/*
 * manually written
 */

#include "qemu/osdep.h"
#include "qemu/log.h"
#include "hw/sysbus.h"
#include "hw/boards.h"
#include "qemu/units.h"
#include "hw/arm/arm.h"
#include "exec/address-spaces.h"
#include "target/arm/cpu-qom.h"
#include "target/arm/cpu.h"
#include "hw/char/serial.h"
/* header files... */

#define TYPE_TI_OMAP3530_TI_OMAP353X "ti_omap3530_ti_omap353x"
#define TI_OMAP3530_TI_OMAP353X(obj) \
    OBJECT_CHECK(TI_OMAP3530_TI_OMAP353XState, (obj), TYPE_TI_OMAP3530_TI_OMAP353X)

typedef struct TI_OMAP3530_TI_OMAP353XState 
{
    /* cpu@0 */
    ARMCPU *cpu;
    
    /* wkup_m3@100000 */

    /* prcm@200000 */ // Power, Reset, and Clock Management

    /* dpll_core_ck@490 */

    /* dpll_core_m4_ck@480 */

    /* dpll_core_m5_ck@484 */

    /* dpll_core_m6_ck@4d8 */

    /* dpll_mpu_ck@488 */

    /* dpll_mpu_m2_ck@4a8 */

    /* dpll_ddr_ck@494 */

    /* dpll_ddr_m2_ck@4a0 */

    /* dpll_disp_ck@498 */

    /* dpll_disp_m2_ck@4a4 */

    /* dpll_per_ck@48c */

    /* dpll_per_m2_ck@4ac */

    /* cefuse_fck@a20 */

    /* clkdiv32k_ick@14c */

    /* pruss_ocp_gclk@530 */

    /* mmu_fck@914 */

    /* timer1_fck@528 */

    /* timer2_fck@508 */

    /* timer3_fck@50c */

    /* timer4_fck@510 */

    /* timer5_fck@518 */

    /* timer6_fck@51c */

    /* timer7_fck@504 */

    /* usbotg_fck@47c */

    /* ieee5000_fck@e4 */

    /* wdt1_fck@538 */

    /* cpsw_cpts_rft_clk@520 */

    /* gpio0_dbclk_mux_ck@53c */

    /* gpio0_dbclk@408 */

    /* gpio1_dbclk@ac */

    /* gpio2_dbclk@b0 */

    /* gpio3_dbclk@b4 */

    /* lcd_gclk@534 */

    /* gfx_fclk_clksel_ck@52c */

    /* gfx_fck_div_ck@52c */

    /* sysclkout_pre_ck@700 */

    /* clkout2_div_ck@700 */

    /* dbg_sysclk_ck@414 */

    /* dbg_clka_ck@414 */

    /* stm_pmd_clock_mux_ck@414 */

    /* trace_pmd_clk_mux_ck@414 */

    /* stm_clk_div_ck@414 */

    /* trace_clk_div_ck@414 */

    /* clkout2_ck@700 */

    /* scm@210000 */

    /* pinmux@800 */

    /* scm_conf@0 */

    /* sys_clkin_ck@40 */

    /* ehrpwm0_tbclk@44e10664 */

    /* ehrpwm1_tbclk@44e10664 */

    /* ehrpwm2_tbclk@44e10664 */

    /* wkup_m3_ipc@1324 */

    /* dma-router@f90 */

    /* interrupt-controller@48200000 */

    /* edma@49000000 */

    /* tptc@49800000 */

    /* tptc@49900000 */

    /* gpio@44e07000 */
    MemoryRegion ti_omap4_gpio0_mmio;

    /* gpio@4804c000 */
    MemoryRegion ti_omap4_gpio1_mmio;

    /* gpio@481ac000 */
    MemoryRegion ti_omap4_gpio2_mmio;

    /* gpio@481ae000 */
    MemoryRegion ti_omap4_gpio3_mmio;

    /* serial@44e09000 */

    /* serial@48022000 */

    /* serial@48024000 */

    /* serial@481a6000 */

    /* serial@481a8000 */

    /* serial@481aa000 */

    /* i2c@44e0b000 */

    /* at24cs128n */

    /* rtc_r2221t */

    /* tps65218@24 */

    /* pca9552@60 */

    /* sys-red@0 */

    /* sys-green@1 */

    /* run-red@2 */

    /* run-green@3 */

    /* io-red@4 */

    /* io-green@5 */

    /* ms-red@6 */

    /* ms-green@7 */

    /* ns-red@8 */

    /* ns-green@9 */

    /* usr_r@10 */

    /* usr_g@11 */

    /* sys-over-red@15 */

    /* pca9552@61 */

    /* u6-red@0 */

    /* u6-green@1 */

    /* u5-red@2  */

    /* u5-green@3  */

    /* u4-red@4 */

    /* u4-green@5 */

    /* u3-red@6 */

    /* u3-green@7 */

    /* u2-red@8 */

    /* u2-green@9 */

    /* u1-red@10 */

    /* u1-green@11 */

    /* pca9554@70 */

    /* i2c@4802a000 */

    /* i2c@4819c000 */

    /* mmc@48060000 */

    /* mmc@481d8000 */

    /* mmc@47810000 */

    /* spinlock@480ca000 */

    /* wdt@44e35000 */

    /* can@481cc000 */

    /* can@481d0000 */

    /* mailbox@480C8000 */

    /* timer@44e31000 */

    /* timer@48040000 */

    /* timer@48042000 */

    /* timer@48044000 */

    /* timer@48046000 */

    /* timer@48048000 */

    /* timer@4804a000 */

    /* rtc@44e3e000 */

    /* spi@48030000 */

    /* kbus@0 */

    /* spi@481a0000 */

    /* usb@47400000 */

    /* control@44e10620 */

    /* usb-phy@47401300 */

    /* usb@47401000 */

    /* usb-phy@47401b00 */

    /* usb@47401800 */

    /* dma-controller@47402000 */

    /* epwmss@48300000 */

    /* ecap@48300100 */

    /* pwm@48300200 */

    /* epwmss@48302000 */

    /* ecap@48302100 */

    /* pwm@48302200 */

    /* epwmss@48304000 */

    /* ecap@48304100 */

    /* pwm@48304200+ */

    /* ethernet@4a100000 */

    /* mdio@4a101000 */

    /* switch@0 */

    /* port@0 */

    /* port@1 */

    /* port@2 */

    /* cpsw-phy-sel@44e10650 */

    /* ocmcram@40300000 */

    /* elm@48080000 */

    /* lcdc@4830e000 */

    /* tscadc@44e0d000 */

    /* gpmc@50000000 */

    /* nor@4,0 */

    /* nor@x0,0 */

    /* sham@53100000 */

    /* aes@53500000 */

    /* mcasp@48038000 */

    /* mcasp@4803C000 */

    /* rng@48310000 */

    /* UIO_NVRAM@0x1000000 */

    /* memory */

    /* UIO_DPC31_XINT@0x1000000 */


    uint32_t ti_omap4_gpio0_reserved[0x1000 >> 2];
    uint32_t ti_omap4_gpio1_reserved[0x1000 >> 2];
    uint32_t ti_omap4_gpio2_reserved[0x1000 >> 2];
    uint32_t ti_omap4_gpio3_reserved[0x1000 >> 2];
}TI_OMAP3530_TI_OMAP353XState;


static const MemoryRegionOps ti_omap4_gpio_ops0 = {
    .read = ti_omap4_gpio0_read,
    .write = ti_omap4_gpio0_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
};

static const MemoryRegionOps ti_omap4_gpio_ops1 = {
    .read = ti_omap4_gpio1_read,
    .write = ti_omap4_gpio1_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
};

static const MemoryRegionOps ti_omap4_gpio_ops2 = {
    .read = ti_omap4_gpio2_read,
    .write = ti_omap4_gpio2_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
};

static const MemoryRegionOps ti_omap4_gpio_ops3 = {
    .read = ti_omap4_gpio3_read,
    .write = ti_omap4_gpio3_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
};


static void ti_omap3530_ti_omap353x_init(MachineState *machine)
{
    TI_OMAP3530_TI_OMAP353XState *s = g_new0(TI_OMAP3530_TI_OMAP353XState, 1);
    Error *err = NULL;
    static struct arm_boot_info binfo;
    
    s->cpu = ARM_CPU(object_new(machine->cpu_type));
    object_property_set_bool(OBJECT(s->cpu), true, "realized", &err);

    /* ... */

    /* memory region init */
    memory_region_init_io(&s->ti_omap4_gpio0_mmio, NULL, &ti_omap4_gpio_ops0, s, TYPE_TI_OMAP3530_TI_OMAP353X, 0x1000);
    memory_region_add_subregion_overlap(get_system_memory(), 0x44e07000, &s->ti_omap4_gpio0_mmio, 0);
    memory_region_init_io(&s->ti_omap4_gpio1_mmio, NULL, &ti_omap4_gpio_ops1, s, TYPE_TI_OMAP3530_TI_OMAP353X, 0x1000);
    memory_region_add_subregion_overlap(get_system_memory(), 0x4804c000, &s->ti_omap4_gpio1_mmio, 0);
    memory_region_init_io(&s->ti_omap4_gpio2_mmio, NULL, &ti_omap4_gpio_ops2, s, TYPE_TI_OMAP3530_TI_OMAP353X, 0x1000);
    memory_region_add_subregion_overlap(get_system_memory(), 0x481ac000, &s->ti_omap4_gpio2_mmio, 0);
    memory_region_init_io(&s->ti_omap4_gpio3_mmio, NULL, &ti_omap4_gpio_ops3, s, TYPE_TI_OMAP3530_TI_OMAP353X, 0x1000);
    memory_region_add_subregion_overlap(get_system_memory(), 0x481ae000, &s->ti_omap4_gpio3_mmio, 0);

    /* ... */

}

static void ti_omap3530_ti_omap353x_machine_init(MachineClass *mc)
{
    mc->desc = "ti_omap3530_ti_omap353x";
    mc->init = ti_omap3530_ti_omap353x_init;
    mc->default_ram_size = 256 * MiB;
    mc->default_cpu_type = ARM_CPU_TYPE_NAME("cortex-a8");
    mc->ignore_memory_transaction_failures = false;
}

DEFINE_MACHINE("ti_omap3530_ti_omap353x", ti_omap3530_ti_omap353x_machine_init)