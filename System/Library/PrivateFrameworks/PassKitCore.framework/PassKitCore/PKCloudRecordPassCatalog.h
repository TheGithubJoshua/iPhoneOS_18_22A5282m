@class PKCatalog;

@interface PKCloudRecordPassCatalog : PKCloudRecordObject

@property (retain, nonatomic) PKCatalog *catalog;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)item;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)_descriptionWithIncludeItem:(BOOL)a0;
- (void)applyCloudRecordObject:(id)a0;
- (id)descriptionWithItem:(BOOL)a0;

@end
