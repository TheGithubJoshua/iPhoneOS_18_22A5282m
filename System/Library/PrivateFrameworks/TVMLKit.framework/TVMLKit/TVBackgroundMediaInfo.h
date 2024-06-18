@class IKAppPlayerBridge;

@interface TVBackgroundMediaInfo : TVMediaInfo

@property (retain, nonatomic) IKAppPlayerBridge *playerBridge;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
