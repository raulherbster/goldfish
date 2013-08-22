#include <linux/kernel.h>
#include <linux/linkage.h>

asmlinkage long
sys_seal(void)
{
  return 10;
}

asmlinkage long
sys_is_sealed(void)
{
  return 12;
}

asmlinkage long
sys_sld_create_key (const struct sld_key_alias __user * key_alias)
{
  return 0;
}

asmlinkage long
sys_sld_open (const char __user * filename,
	      int flags, const struct sld_key_alias __user * key_alias)
{
  return 0;
}

asmlinkage long
sys_sld_ssl_connect (const char __user * servername,
		 const struct sld_key_alias __user * key_alias,
		 const struct sld_conn_handler __user * handler)
{
  return 0;
}

asmlinkage long
sys_sld_ssl_read (const struct sld_conn_handler __user * handler,
	      char __user * buf)
{
  return 0;
}

asmlinkage long
sys_sld_ssl_write (const struct sld_conn_handler __user * handler,
	       char __user * buf)
{
  return 0;
}

asmlinkage long
sys_sld_ssl_disconnect (const struct sld_conn_handler __user * handler)
{
  return 0;
}

asmlinkage long
sys_sld_post (const struct sld_conn_handler __user * handler,
	      char __user * buf, char __user * response)
{
  return 0;
}

asmlinkage long
sys_sld_put (const struct sld_conn_handler __user * handler,
	     char __user * buf, char __user * response)
{
  return 0;
}

asmlinkage long
sys_sld_get (const struct sld_conn_handler __user * handler,
	     char __user * buf, char __user * response)
{
  return 0;
}

asmlinkage long
sys_sld_delete (const struct sld_conn_handler __user * handler,
		char __user * buf, char __user * response)
{
  return 0;
}

