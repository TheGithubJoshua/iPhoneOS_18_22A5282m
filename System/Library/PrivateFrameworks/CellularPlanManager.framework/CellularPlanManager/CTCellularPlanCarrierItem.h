@class NSString, CTPlan;

@interface CTCellularPlanCarrierItem : NSObject <NSCopying, NSSecureCoding> {
    NSString *_addOnWebsheetURL;
    NSString *_addOnEndpointType;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CTPlan *plan;
@property (readonly, nonatomic) NSString *websheetURL;
@property (readonly, nonatomic) BOOL applePaySupported;
@property (readonly, nonatomic) NSString *planPurchaseEndpointType;
@property (readonly, nonatomic) NSString *warningText;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 plan:(id)a1 url:(id)a2 applePaySupported:(BOOL)a3 responseType:(id)a4 warningText:(id)a5;

@end
