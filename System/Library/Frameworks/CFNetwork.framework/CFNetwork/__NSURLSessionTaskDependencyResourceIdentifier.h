@class NSString;

@interface __NSURLSessionTaskDependencyResourceIdentifier : NSObject <NSCopying> {
    NSString *_URLPath;
    NSString *_mimeType;
}

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
