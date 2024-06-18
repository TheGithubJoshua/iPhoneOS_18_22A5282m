@class NSString;

@interface PLFilePathDescription : NSObject {
    NSString *_path;
}

+ (id)descriptionWithFileURL:(id)a0;
+ (id)descriptionWithPath:(id)a0;

- (id)init;
- (id)redactedDescription;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
