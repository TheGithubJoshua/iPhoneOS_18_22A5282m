@class PKPass, PKPassView;

@interface PKPassFooterViewConfiguration : NSObject

@property (readonly, nonatomic) PKPassView *passView;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) PKPass *pass;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)pass;
- (id)initWithPassView:(id)a0 state:(long long)a1;

@end
