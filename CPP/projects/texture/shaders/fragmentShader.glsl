#version 330 core
out vec4 FragColor;

in vec2 TexCoord2; // Chillguy texture coordinates

uniform sampler2D texture2; // Chillguy texture

void main()
{
    FragColor = texture(texture2, TexCoord2); // Only render Chillguy texture
}
