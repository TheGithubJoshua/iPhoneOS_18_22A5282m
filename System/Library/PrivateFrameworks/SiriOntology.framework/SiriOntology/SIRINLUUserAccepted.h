@class NSUUID, USOSerializedGraph;

@interface SIRINLUUserAccepted : NSObject <SIRINLUUserDialogAct>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *offerId;
@property (retain, nonatomic) USOSerializedGraph *reference;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOfferId:(id)a0 reference:(id)a1;

@end
