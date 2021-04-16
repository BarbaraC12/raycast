int	option1()
{
  void		*mlx_ptr;
  void		*win_ptr;
  double	x;
  double	y;
  int		clr;
  int		nb;
  double	theta;
  double	r;
  double	angle;
 
  nb = 1000;
  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, 500, 500, "option1");
  angle = 0.;
  clr = 0xFF0000;
  while (nb--)
    {      
      theta = PI * angle / 180.;
      r = cos(3.5 * theta);
      x = 250. + r * cos(theta) * 1000.;
      y = 250. + r * sin(theta) * 1000.;
      r = r * 1000.;
      mlx_pixel_put(mlx_ptr, win_ptr, x, y, clr);
      angle += 1.;
      if (angle > 360.)
	angle = 0.;
    }
  mlx_key_hook(win_ptr, gere_key, 0);
  mlx_loop(mlx_ptr);
  return (0);
}

int	option1()
{
  void		*mlx_ptr;
  void		*win_ptr;
  int		nb;
  int const clr = 0xFF0000;
  double	angle;

  nb = 1000;
  mlx_ptr = mlx_init();
  win_ptr = mlx_new_window(mlx_ptr, 500, 500, "option1");
  angle = 0.;
  while (nb--)
    {
      double const theta = PI * angle / 180.;
      double const r = cos(3.5 * theta);
      double const x = 250. + r * cos(theta) * 1000.;
      double const y = 250. + r * sin(theta) * 1000.;
      /*r = r * 1000.; cette ligne est inutile, puisque r n'est plus lu avant sa prochaine modif*/
      mlx_pixel_put(mlx_ptr, win_ptr, x, y, clr);
      angle += 1.;
      if (angle > 360.)
	angle = 0.;
    }
  mlx_key_hook(win_ptr, gere_key, 0);
  mlx_loop(mlx_ptr);
  return (0);
}
