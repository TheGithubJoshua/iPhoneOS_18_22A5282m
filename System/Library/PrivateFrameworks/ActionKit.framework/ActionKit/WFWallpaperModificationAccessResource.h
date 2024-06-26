@interface WFWallpaperModificationAccessResource : WFAccessResource

+ (BOOL)isSystemResource;

- (id)name;
- (unsigned long long)status;
- (id)localizedErrorReasonForStatus:(unsigned long long)a0;
- (id)localizedImportErrorReasonForStatus:(unsigned long long)a0;
- (id)protectedResourceDescription;
- (id)localizedAccessResourceErrorString;

@end
