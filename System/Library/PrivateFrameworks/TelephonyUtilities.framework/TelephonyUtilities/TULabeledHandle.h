@class NSString, TUHandle;

@interface TULabeledHandle : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TUHandle *handle;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) BOOL isSuggested;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithHandle:(id)a0 label:(id)a1 isSuggested:(BOOL)a2;
- (BOOL)isEqualToLabeledHandle:(id)a0;

@end
