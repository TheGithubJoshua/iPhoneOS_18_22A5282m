@class NSObject;
@protocol OS_os_log;

@interface CKSignpost : NSObject

@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) unsigned long long identifier;

+ (id)signpost;

- (id)init;
- (id)initWithLog:(id)a0;
- (void).cxx_destruct;

@end
