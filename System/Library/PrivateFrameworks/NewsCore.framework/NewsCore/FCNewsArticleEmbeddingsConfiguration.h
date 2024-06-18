@class FCNewsArticleEmbeddingConfiguration;

@interface FCNewsArticleEmbeddingsConfiguration : NSObject

@property (retain, nonatomic) FCNewsArticleEmbeddingConfiguration *titleEmbeddingConfiguration;
@property (retain, nonatomic) FCNewsArticleEmbeddingConfiguration *bodyEmbeddingConfiguration;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
