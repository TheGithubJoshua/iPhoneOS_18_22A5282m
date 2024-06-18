@class NSMutableDictionary;

@interface SFSSOspreyTTSClientFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *ospreyClientFactory;

+ (id)sharedInstance;

- (id)init;
- (void)removeAll;
- (void).cxx_destruct;
- (id)getOspreyClientByUrl:(id)a0;
- (id)getOspreyClientByUrl:(id)a0 useBlazar:(BOOL)a1 enableAuthentication:(BOOL)a2;

@end
