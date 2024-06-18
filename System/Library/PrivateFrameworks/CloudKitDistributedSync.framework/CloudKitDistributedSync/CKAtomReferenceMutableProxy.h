@interface CKAtomReferenceMutableProxy : CKXStructMutableProxyBase <CKXWriteStructProxy>

- (id)location;
- (void)setType:(unsigned char)a0;
- (id)timestamp;
- (void)assignLocationFromProxy:(id)a0;
- (void)assignTimestampFromProxy:(id)a0;
- (void)copyFromReadProxy:(id)a0;
- (void)copyFromReference:(id)a0;

@end
