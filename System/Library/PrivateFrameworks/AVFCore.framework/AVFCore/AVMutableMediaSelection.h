@interface AVMutableMediaSelection : AVMediaSelection

- (id)_validatedGroupIdentifierKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)selectMediaOption:(id)a0 inMediaSelectionGroup:(id)a1;
- (BOOL)_isValidMediaSelectionOption:(id)a0 forMediaSelectionGroup:(id)a1;

@end
