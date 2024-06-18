@class NSString, NSData;

@interface CKDPushToken : NSObject

@property (retain, nonatomic) NSString *apsEnvironmentString;
@property (retain, nonatomic) NSData *apsToken;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
