#include  <GLES2/gl2.h>

struct obj_t {
	GLuint vbo_vert, vbo_tex, vbo_norm;
	GLint vert_attrib, tex_attrib, norm_attrib;
	GLint mvp_uniform, mv_uniform, tex_uniform;
	int num_verts;
	GLuint program;
};

int createObj(struct obj_t *obj, int numVerts, float verts[], float txVert[],
	      float norms[], char *vertShader, char *fragShader);
int createObjCopyShader(struct obj_t *obj, int numVerts, float verts[],
			float txVert[], float norms[], struct obj_t *sdrobj);
void drawObj(struct obj_t *obj, kmMat4 * combined, kmMat4 * mv);