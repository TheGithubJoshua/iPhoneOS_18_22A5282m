@class NSString, NSAttributedString;

@interface MKUGCCallToActionViewAppearance : NSObject {
    id /* block */ _ctaTextBlock;
}

@property (nonatomic) long long ratingState;
@property (nonatomic) unsigned long long numberOfPhotosAdded;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSAttributedString *callToActionText;
@property (readonly, nonatomic) NSString *leadingGlyphName;
@property (readonly, nonatomic) NSString *trailingGlyphName;

+ (id)_editSubmissionCallToActionViewWithTextRefreshBlock:(id /* block */)a0;
+ (id)_photosCallToActionViewWithTextRefreshBlock:(id /* block */)a0 hasPhotoLibraryEmphasis:(BOOL)a1;
+ (id)_ratingsCallToActionViewWithTextRefreshBlock:(id /* block */)a0;
+ (id)activeAddPhotosAppearanceForThirdPartyPlacecardWithNumberOfPhotos:(unsigned long long)a0;
+ (id)activeThumbsUpAppearanceForThirdPartyPlacecard;
+ (id)headerAppearanceForFirstPartyPlacecardWithMapItem:(id)a0;
+ (id)passiveAddPhotosAppearanceForThirdPartyPlacecard;
+ (id)passiveThumbsUpAppearanceForThirdPartyPlacecard;
+ (id)userRecommendedAppearanceForNumberOfPhotosAdded:(unsigned long long)a0;
+ (id)userRecommendedAppearanceForRatingState:(long long)a0;
+ (id)userRecommendedAppearanceForRatingState:(long long)a0 numberOfPhotosAdded:(unsigned long long)a1;
+ (id)userRecommendedFailureAppearance;
+ (id)userRecommendedLoadingAppearance;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(long long)a0 callToActionTextRefreshBlock:(id /* block */)a1;
- (id)initWithType:(long long)a0 callToActionTextRefreshBlock:(id /* block */)a1 leadingGlpyhName:(id)a2;
- (id)initWithType:(long long)a0 callToActionTextRefreshBlock:(id /* block */)a1 leadingGlpyhName:(id)a2 trailingGlyphName:(id)a3;

@end
