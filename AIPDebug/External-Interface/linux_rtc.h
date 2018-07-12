#ifndef LINUX_RTC_H
#define LINUX_RTC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <time.h>
#include <sys/ioctl.h>
#include <w_debug.h>
#include <linux/rtc.h>
#include <linux/ioctl.h>


class LINUX_RTC {
public:
    LINUX_RTC();
    int set_rtc(rtc_time rtc_tm);
    rtc_time get_rtc();
};
#endif // LINUX_RTC_H
