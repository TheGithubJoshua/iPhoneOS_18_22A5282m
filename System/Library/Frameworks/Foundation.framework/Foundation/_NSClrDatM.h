@interface _NSClrDatM : NSConcreteMutableData

- (void)_freeBytes;
- (BOOL)_canUseRealloc;
- (BOOL)_allowsDirectEncoding;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_canReplaceWithDispatchDataForXPCCoder;
- (id)description;

@end
