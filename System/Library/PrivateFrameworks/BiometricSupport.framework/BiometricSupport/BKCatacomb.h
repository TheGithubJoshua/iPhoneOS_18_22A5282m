@class NSString, NSDictionary;

@interface BKCatacomb : NSObject {
    NSDictionary *_writeAttributes;
}

@property (readonly, copy, nonatomic) NSString *catacombDir;

+ (id)catacombWithDir:(id)a0;

- (int)writeData:(id)a0 toFile:(id)a1;
- (id)init;
- (int)commitWrite;
- (int)recover;
- (int)syncDir:(id)a0;
- (id)content;
- (int)deleteAll;
- (void).cxx_destruct;
- (id)catacombPrepareDir;
- (int)readData:(id *)a0 fromFile:(id)a1;
- (int)deleteFile:(id)a0;
- (id)catacombCommitDir;

@end
