@protocol CalBirthdayListener;

@interface CADBirthdayListener : NSObject

@property (retain, nonatomic) id<CalBirthdayListener> ekBirthdayListener;
@property (retain, nonatomic) Class listenerClass;

+ (void)setBirthdayCalendarEnabled:(BOOL)a0;
+ (void)start;
+ (id)sharedListener;
+ (BOOL)birthdayCalendarEnabled;
+ (void)reset;

- (id)init;
- (void)setBirthdayCalendarEnabled:(BOOL)a0;
- (void)start;
- (void).cxx_destruct;
- (BOOL)birthdayCalendarEnabled;
- (void)reset;

@end
