@interface TDThemeConstant : NSManagedObject {
    int _identifier;
}

- (void)setIdentifier:(unsigned int)a0;
- (void)setDisplayName:(id)a0;
- (id)displayName;
- (id)debugDescription;
- (unsigned int)identifier;
- (id)constantName;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)a0;
- (void)setConstantName:(id)a0;

@end
