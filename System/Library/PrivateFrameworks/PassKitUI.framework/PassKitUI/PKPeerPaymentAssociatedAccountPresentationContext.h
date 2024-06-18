@class PKFamilyMember, PKPaymentTransaction;

@interface PKPeerPaymentAssociatedAccountPresentationContext : NSObject

@property (retain, nonatomic) PKFamilyMember *member;
@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (nonatomic) long long setupType;

- (void).cxx_destruct;
- (id)description;
- (id)initWithFAFamilyMember:(id)a0 options:(id)a1;
- (id)initWithPKFamilyMember:(id)a0 options:(id)a1;
- (id)initWithPKFamilyMember:(id)a0 setupType:(long long)a1;
- (id)initWithPKFamilyMember:(id)a0 transaction:(id)a1;

@end
