@class UIColor, NSArray, TVPlaylist, UIView;

@interface TVMediaInfo : NSObject <NSCopying>

@property (nonatomic) long long intent;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSArray *imageProxies;
@property (retain, nonatomic) TVPlaylist *playlist;
@property (retain, nonatomic) UIView *overlayView;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end