@class NSString, LSApplicationProxy;

@interface PSThirdPartyApp : NSObject {
    NSString *_localizedName;
}

@property (readonly, nonatomic) LSApplicationProxy *proxy;

- (void)load;
- (id)initWithApplicationProxy:(id)a0;
- (id)localizedName;
- (void).cxx_destruct;
- (id)description;

@end
