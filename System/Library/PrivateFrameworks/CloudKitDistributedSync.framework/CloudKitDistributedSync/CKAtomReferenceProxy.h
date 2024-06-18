@interface CKAtomReferenceProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (id)location;
- (id)timestamp;
- (unsigned char)type;
- (id)reference;

@end
