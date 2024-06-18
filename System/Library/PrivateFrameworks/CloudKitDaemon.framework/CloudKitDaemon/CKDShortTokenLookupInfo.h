@class NSString, NSData;

@interface CKDShortTokenLookupInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSString *routingKey;
@property (retain, nonatomic) NSData *shortSharingTokenHashData;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (nonatomic) BOOL forceDSRefetch;
@property (retain, nonatomic) NSString *participantID;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
