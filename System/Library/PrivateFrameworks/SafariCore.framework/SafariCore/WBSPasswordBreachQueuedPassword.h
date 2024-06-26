@class NSArray, WBSPair, NSData, NSUUID, NSMutableArray;

@interface WBSPasswordBreachQueuedPassword : NSObject {
    NSMutableArray *_bucketIdentifierAndHashStack;
    NSUUID *_uuid;
    NSData *_highFrequencyEncodedPassword;
}

@property (readonly, nonatomic) NSArray *persistentIdentifiers;
@property (readonly, nonatomic) WBSPair *topBucketIdentiferAndHash;
@property (readonly, nonatomic) unsigned long long remainingHashCount;
@property (readonly, nonatomic) NSData *highFrequencyEncodedPasswordData;
@property (readonly, nonatomic) NSUUID *uuid;

- (void).cxx_destruct;
- (id)description;
- (id)initFakePasswordWithContext:(id)a0;
- (id)initWithCredentials:(id)a0 context:(id)a1;
- (void)pushBucketIdentifiersAndHashesFromQueuedPassword:(id)a0;
- (void)removeTopBucketIdentifierAndHash;

@end
