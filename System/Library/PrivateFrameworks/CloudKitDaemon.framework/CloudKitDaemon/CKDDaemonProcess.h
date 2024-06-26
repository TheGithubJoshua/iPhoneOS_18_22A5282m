@interface CKDDaemonProcess : NSObject

@property (readonly, nonatomic) long long processType;
@property (readonly, nonatomic) BOOL isSystemInstalledBinary;

+ (id)currentProcess;
+ (void)deriveCurrentProcessWithArgC:(int)a0 argv:(const char **)a1;

- (id)_initWithArgC:(int)a0 argv:(const char **)a1;
- (id)_initWithProcessType:(long long)a0;

@end
