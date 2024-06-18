@class MNActiveRouteInfo, GEOPBTransitArtwork, GEOTransitBanner;
@protocol GEOServerFormattedString;

@interface MNTransitAlert : NSObject <NSSecureCoding> {
    GEOTransitBanner *_banner;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MNActiveRouteInfo *currentRouteInfo;
@property (readonly, nonatomic) id<GEOServerFormattedString> command;
@property (readonly, nonatomic) id<GEOServerFormattedString> detail;
@property (readonly, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) int maneuverType;
@property (readonly, nonatomic) unsigned long long stopIndex;
@property (readonly, nonatomic) unsigned long long stepIndex;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTransitBanner:(id)a0 transitStep:(id)a1 activeRoute:(id)a2;

@end
