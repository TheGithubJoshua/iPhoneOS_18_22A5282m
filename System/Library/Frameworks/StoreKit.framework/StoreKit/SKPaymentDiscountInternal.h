@class NSString, NSUUID, NSNumber;

@interface SKPaymentDiscountInternal : NSObject {
    NSString *_identifier;
    NSString *_keyIdentifier;
    NSUUID *_nonce;
    NSString *_signature;
    NSNumber *_timestamp;
}

- (void).cxx_destruct;

@end
