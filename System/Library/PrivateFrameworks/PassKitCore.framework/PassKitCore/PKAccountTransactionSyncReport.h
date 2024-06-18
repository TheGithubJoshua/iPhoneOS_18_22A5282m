@class NSArray;

@interface PKAccountTransactionSyncReport : PKAccountReport <NSCopying, NSSecureCoding> {
    NSArray *_items;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_itemArrayRepresentation;
- (id)initWithItems:(id)a0 accountIdentifier:(id)a1;

@end
