@class AVChapterMetadataItemInternal;

@interface AVChapterMetadataItem : AVMetadataItem {
    AVChapterMetadataItemInternal *_privChapter;
}

- (void)cancelLoading;
- (id)languageCode;
- (id)extraAttributes;
- (id)init;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })time;
- (id)startDate;
- (id)key;
- (id)locale;
- (id)extendedLanguageTag;
- (id)dataType;
- (void)_addFigAssetNotifications;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)_removeFigAssetNotifications;
- (id)description;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;
- (id)value;
- (id)keySpace;
- (void)_takeValueFrom:(id)a0;
- (long long)_chapterGroupIndex;
- (long long)_chapterIndex;
- (void)_ensureValueLoadedSync;
- (id)_initWithAsset:(id)a0 chapterGroupIndex:(long long)a1 chapterIndex:(long long)a2 chapterType:(id)a3 extendedLanguageTag:(id)a4 languageCode:(id)a5 chapterDataType:(id)a6 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a7 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a8;
- (void)_setValueStatus:(long long)a0 figErrorCode:(int)a1;
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)a0;
- (long long)_valueStatus;
- (id)commonKey;

@end
