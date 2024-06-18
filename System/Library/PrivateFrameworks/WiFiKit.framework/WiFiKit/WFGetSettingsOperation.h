@class NSString, NSArray, NSOperationQueue;

@interface WFGetSettingsOperation : WFOperation {
    NSString *_name;
}

@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) struct __SCPreferences { } *prefs;
@property (retain, nonatomic) NSArray *settings;
@property (retain, nonatomic) NSOperationQueue *keychainQueue;

- (void)start;
- (id)name;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setName:(id)a0;
- (id)initWithSSID:(id)a0;
- (id)initWithNetworkProfile:(id)a0;

@end
