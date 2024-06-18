@interface LNMacApplicationConnectionOptions : LNConnectionOptions

@property (nonatomic, getter=isBackground) BOOL background;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
