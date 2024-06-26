@class NSString, NSNumber;

@interface STStewieStatusDomainDataDiff : NSObject <STStatusDomainDataDiff> {
    NSNumber *_stewieActiveChangedValue;
    NSNumber *_stewieConnectedChangedValue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diffFromData:(id)a0 toData:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)applyToMutableData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)diffByApplyingDiff:(id)a0;
- (id)dataByApplyingToData:(id)a0;

@end
