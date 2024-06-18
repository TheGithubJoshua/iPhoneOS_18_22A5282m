@class NSDateFormatter, PHFetchResult, NSPointerArray, PHPhotoLibrary, NSDate;
@protocol PUWallpaperNightlySuggestionsPosterConfiguration;

@interface PUWallpaperNightlySuggestionsDataSource : PUWallpaperClassDataSource {
    PHPhotoLibrary *_photoLibrary;
    NSDateFormatter *_dateFormatter;
    PHFetchResult *_fetchResult;
    NSPointerArray *_delegates;
}

@property (retain, nonatomic) id<PUWallpaperNightlySuggestionsPosterConfiguration> posterConfiguration;
@property (copy, nonatomic) NSDate *date;

- (void)refresh;
- (id)initWithPhotoLibrary:(id)a0;
- (id)delegates;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(id)a0;
- (id)fetchResult;
- (id)title;
- (id)_dictionaryWithPosterConfiguration:(id)a0;
- (unsigned short)wallpaperSubtype;

@end
