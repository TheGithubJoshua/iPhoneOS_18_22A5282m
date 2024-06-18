@class PLPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo {
    PLPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) long long countOfItems;

- (long long)numberOfItems;
- (id)initWithPhotoLibrary:(id)a0;
- (long long)sectionType;
- (id)photoLibrary;
- (id)date;
- (void).cxx_destruct;
- (BOOL)isLoaded;
- (id)albumTitle;
- (id)captionForItemAtIndex:(long long)a0;

@end
