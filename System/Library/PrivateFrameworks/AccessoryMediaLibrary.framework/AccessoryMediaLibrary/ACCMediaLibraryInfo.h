@class NSString, ACCMediaLibraryUpdateLibraryInfo;

@interface ACCMediaLibraryInfo : NSObject {
    BOOL _state[2];
    BOOL _stateInit[2];
}

@property (readonly, nonatomic) NSString *libraryUID;
@property (readonly, nonatomic) ACCMediaLibraryUpdateLibraryInfo *info;

- (void).cxx_destruct;
- (id)description;
- (id)initWithInfo:(id)a0;
- (BOOL)getState:(int)a0;
- (BOOL)setState:(int)a0 value:(BOOL)a1;

@end
