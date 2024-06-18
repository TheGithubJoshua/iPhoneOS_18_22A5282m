@class NSString;

@interface SFProxyText : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned int slotIdentifier;
@property (readonly, nonatomic) double slotTextHeight;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithText:(id)a0;
- (id)initWithSlotIdentifier:(unsigned int)a0;
- (id)initWithSlotIdentifier:(unsigned int)a0 slotTextHeight:(double)a1;

@end
