@class NSObject;
@protocol OS_os_log;

@interface CBExtendedDisplayMitigation : NSObject {
    NSObject<OS_os_log> *_logHandle;
}

@property (readonly, nonatomic) BOOL isActive;

+ (BOOL)isSupported;

- (id)init;
- (void)dealloc;
- (BOOL)setActive:(BOOL)a0;
- (float)getCap;

@end
