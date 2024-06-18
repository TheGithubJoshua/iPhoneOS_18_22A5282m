@class NSString;

@interface CTCellularPlanManagerCameraScanAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *smdpAddress;
@property (retain, nonatomic) NSString *matchingId;
@property (retain, nonatomic) NSString *OID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)performWithCompletionHandler:(id /* block */)a0;

@end
