@class NSString, PKProtobufPaymentSummaryItem;

@interface PKProtobufAutomaticReloadPaymentRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPaymentDescription;
@property (retain, nonatomic) NSString *paymentDescription;
@property (readonly, nonatomic) BOOL hasAutomaticPaymentBilling;
@property (retain, nonatomic) PKProtobufPaymentSummaryItem *automaticPaymentBilling;
@property (readonly, nonatomic) BOOL hasBillingAgreement;
@property (retain, nonatomic) NSString *billingAgreement;
@property (readonly, nonatomic) BOOL hasManagementURL;
@property (retain, nonatomic) NSString *managementURL;
@property (readonly, nonatomic) BOOL hasTokenNotificationURL;
@property (retain, nonatomic) NSString *tokenNotificationURL;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
