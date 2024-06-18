@class NSString, NSData;

@interface _PLLazyPreheatData : NSData {
    NSString *_path;
    NSData *_data;
}

+ (id)dataWithContentsOfFile:(id)a0;

- (id)initWithContentsOfFile:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)length;
- (const void *)bytes;
- (void)_loadData;

@end
